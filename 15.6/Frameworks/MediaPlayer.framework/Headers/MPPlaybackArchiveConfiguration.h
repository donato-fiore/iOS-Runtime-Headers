// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPPLAYBACKARCHIVECONFIGURATION_H
#define MPPLAYBACKARCHIVECONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPPlaybackArchiveConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) CGSize preferredArtworkSize; // ivar: _preferredArtworkSize


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPreferredArtworkSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif