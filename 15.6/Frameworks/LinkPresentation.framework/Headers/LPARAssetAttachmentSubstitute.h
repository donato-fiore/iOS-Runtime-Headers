// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPARASSETATTACHMENTSUBSTITUTE_H
#define LPARASSETATTACHMENTSUBSTITUTE_H

@protocol NSSecureCoding;


#import "LPARAsset.h"

@interface LPARAssetAttachmentSubstitute : LPARAsset <NSSecureCoding>



@property (nonatomic) NSInteger index; // ivar: _index


+(BOOL)supportsSecureCoding;
-(BOOL)_isSubstitute;
-(id)initWithARAsset:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif