// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEFORMULAREWRITE_MERGEORIGINMOVEDINFO_H
#define TSCEFORMULAREWRITE_MERGEORIGINMOVEDINFO_H


#import <Foundation/Foundation.h>


@interface TSCEFormulaRewrite_MergeOriginMovedInfo : NSObject

@property (readonly, nonatomic) *void mergeOriginsMap; // ivar: _mergeOriginsMap
@property (readonly, nonatomic) *void reverseOriginsMap; // ivar: _reverseOriginsMap


-(id)description;
-(id)initFromMessage:(*void)arg0 ;
-(id)initWithMergeOriginsMap:(*void)arg0 reverseMap:(*void)arg1 ;
-(void)saveToMessage:(*void)arg0 ;


@end


#endif