// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETPROGRESS_H
#define MAAUTOASSETPROGRESS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAutoAssetProgress : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat expectedTimeRemainingSecs; // ivar: _expectedTimeRemainingSecs
@property (nonatomic) BOOL isStalled; // ivar: _isStalled
@property (nonatomic) NSInteger totalExpectedBytes; // ivar: _totalExpectedBytes
@property (nonatomic) NSInteger totalWrittenBytes; // ivar: _totalWrittenBytes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copy;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)newSummaryDictionary;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif