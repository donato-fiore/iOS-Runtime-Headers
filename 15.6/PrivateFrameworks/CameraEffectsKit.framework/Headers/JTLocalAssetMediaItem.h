// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JTLOCALASSETMEDIAITEM_H
#define JTLOCALASSETMEDIAITEM_H

@class NSString, NSURL;


#import "JFXMediaItem.h"

@interface JTLocalAssetMediaItem : JFXMediaItem

@property (copy, nonatomic) NSString *localFileName; // ivar: _localFileName
@property (retain, nonatomic) NSURL *localFileURL; // ivar: _localFileURL


-(BOOL)canSaveToCameraRoll;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)info;
-(id)initWithInfo:(id)arg0 delegate:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(void)dealloc;


@end


#endif