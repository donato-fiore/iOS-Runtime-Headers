// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKHASHTAGITEM_H
#define PKHASHTAGITEM_H

@class NSString, NSUUID;


#import "PKDetectionItem.h"

@interface PKHashtagItem : PKDetectionItem

@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) NSString *hashtagResult;
@property (readonly, nonatomic) NSUUID *hashtagUUID;


+(id)hashtagItemWithQueryItem:(id)arg0 sessionManager:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_actionNameForActivation:(BOOL)arg0 ;
-(id)_baselinePath;
-(id)description;
-(id)strokeColor;
-(void)clearActiveInDrawing:(id)arg0 ;
-(void)invalidateUUID;


@end


#endif