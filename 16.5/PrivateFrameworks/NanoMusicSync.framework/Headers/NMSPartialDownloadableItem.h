// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSPARTIALDOWNLOADABLEITEM_H
#define NMSPARTIALDOWNLOADABLEITEM_H



#import "NMSDownloadableItem.h"

@interface NMSPartialDownloadableItem : NMSDownloadableItem

@property (readonly, nonatomic) NSUInteger minimumSize; // ivar: _minimumSize
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithMediaLibraryIdentifier:(id)arg0 externalLibraryIdentifier:(id)arg1 size:(NSUInteger)arg2 itemType:(NSUInteger)arg3 manuallyAdded:(BOOL)arg4 minimumSize:(NSUInteger)arg5 offset:(NSUInteger)arg6 ;


@end


#endif