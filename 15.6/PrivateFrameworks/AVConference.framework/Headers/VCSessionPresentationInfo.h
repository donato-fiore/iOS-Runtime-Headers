// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSESSIONPRESENTATIONINFO_H
#define VCSESSIONPRESENTATIONINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VCSessionPresentationInfo : NSObject <NSSecureCoding>

 {
    unsigned int _displayID;
    CGSize _displaySize;
    CGRect _appWindowRect;
    unsigned int _uiLayout;
    tagVCSpatialAudioMetadataGlobalInfo _metadataGlobalInfo;
}


@property (nonatomic) tagAVCSessionPresentationInfo avcSessionPresentationInfo;
@property (readonly, nonatomic) BOOL hasPendingChanges; // ivar: _hasPendingChanges
@property (readonly, nonatomic) *tagVCSpatialAudioMetadataGlobalInfo metadataGlobalInfo;
@property (readonly, nonatomic) unsigned char uiState; // ivar: _uiState


+(BOOL)supportsSecureCoding;
+(unsigned char)avcUIStateWithUIState:(unsigned char)arg0 ;
+(unsigned char)uiStateWithAVCUIState:(unsigned char)arg0 ;
+(unsigned int)avcLayoutWithLayout:(unsigned int)arg0 ;
+(unsigned int)layoutWithAVCLayout:(unsigned int)arg0 ;
+(unsigned int)metadataSateWithUIState:(unsigned char)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDisplayID:(unsigned int)arg0 ;
-(void)unserialize:(id)arg0 ;


@end


#endif