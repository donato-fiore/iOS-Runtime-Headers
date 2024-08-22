// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SDBETAPROGRAM_H
#define SDBETAPROGRAM_H

@class NSString, NSURL, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SDBetaProgram : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *assetAudience; // ivar: _assetAudience
@property (retain, nonatomic) NSURL *assetBrain; // ivar: _assetBrain
@property (retain, nonatomic) NSURL *assetUpdate; // ivar: _assetUpdate
@property (retain, nonatomic) NSURL *catalog; // ivar: _catalog
@property (retain, nonatomic) NSArray *legalDocs; // ivar: _legalDocs
@property (nonatomic) NSUInteger platform; // ivar: _platform
@property (nonatomic) NSInteger program; // ivar: _program
@property (nonatomic) NSInteger programID; // ivar: _programID
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)betaProgramWithID:(NSInteger)arg0 title:(id)arg1 program:(id)arg2 catalog:(id)arg3 assetUpdate:(id)arg4 assetBrain:(id)arg5 assetAudience:(id)arg6 legalDocs:(id)arg7 platform:(NSUInteger)arg8 ;
+(id)betaProgramWithJSON:(id)arg0 ;
+(id)nilIfNSNull:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(NSInteger)arg0 title:(id)arg1 program:(id)arg2 catalog:(id)arg3 assetUpdate:(id)arg4 assetBrain:(id)arg5 assetAudience:(id)arg6 legalDocs:(id)arg7 platform:(NSUInteger)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif