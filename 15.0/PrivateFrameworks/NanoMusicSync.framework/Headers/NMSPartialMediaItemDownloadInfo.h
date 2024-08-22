// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSPARTIALMEDIAITEMDOWNLOADINFO_H
#define NMSPARTIALMEDIAITEMDOWNLOADINFO_H



#import "NMSMediaItemDownloadInfo.h"

@interface NMSPartialMediaItemDownloadInfo : NMSMediaItemDownloadInfo

@property (readonly, nonatomic) NSUInteger minimumSize; // ivar: _minimumSize
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithMediaLibraryIdentifier:(id)arg0 externalLibraryIdentifier:(id)arg1 size:(NSUInteger)arg2 itemType:(NSUInteger)arg3 manuallyAdded:(BOOL)arg4 minimumSize:(NSUInteger)arg5 offset:(NSUInteger)arg6 ;


@end


#endif