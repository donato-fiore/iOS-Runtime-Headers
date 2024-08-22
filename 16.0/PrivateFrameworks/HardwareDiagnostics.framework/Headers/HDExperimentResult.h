// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDEXPERIMENTRESULT_H
#define HDEXPERIMENTRESULT_H

@class NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDExperimentResult : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSMutableDictionary *auxiliaryData; // ivar: _auxiliaryData
@property (readonly, nonatomic) NSMutableDictionary *files; // ivar: _files
@property (readonly, nonatomic) NSMutableDictionary *measurements; // ivar: _measurements


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToExperimentResult:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif