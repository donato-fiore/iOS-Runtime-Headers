// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAAUTOASSETCONTROLSTATISTICSBYSIZE_H
#define MAAUTOASSETCONTROLSTATISTICSBYSIZE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAutoAssetControlStatisticsBySize : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger fullAssets; // ivar: _fullAssets
@property (nonatomic) NSInteger fullBytes; // ivar: _fullBytes
@property (nonatomic) NSInteger patchedAssets; // ivar: _patchedAssets
@property (nonatomic) NSInteger patchedBytes; // ivar: _patchedBytes


+(BOOL)supportsSecureCoding;
-(id)copy;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInitialValue:(NSInteger)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif