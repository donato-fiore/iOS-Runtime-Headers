// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPOSITIONALINFO_H
#define VCPOSITIONALINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VCPositionalInfo : NSObject <NSSecureCoding>

 {
    CGSize _size;
    CGFloat _x;
    CGFloat _y;
    CGFloat _z;
    tagVCSpatialAudioMetadataPositionalInfo _metadataPositionalInfo;
}


@property (nonatomic) tagAVCPositionalInfo avcPositionalInfo;
@property (readonly, nonatomic) BOOL hasPendingChanges; // ivar: _hasPendingChanges
@property (nonatomic) BOOL isInCanvas; // ivar: _isInCanvas
@property (nonatomic) BOOL isVisible; // ivar: _isVisible
@property (readonly, nonatomic) *tagVCSpatialAudioMetadataPositionalInfo metadataPositionalInfo;
@property (nonatomic) unsigned int prominenceIndex; // ivar: _prominenceIndex


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)unserialize:(id)arg0 ;


@end


#endif