// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ACCMEDIALIBRARYACCESSORYPENDINGUPDATEITEM_H
#define _ACCMEDIALIBRARYACCESSORYPENDINGUPDATEITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _ACCMediaLibraryAccessoryPendingUpdateItem : NSObject

@property (readonly, nonatomic) id *item; // ivar: _item
@property (readonly, nonatomic) NSString *libraryUID; // ivar: _libraryUID
@property (readonly, nonatomic) NSString *revision; // ivar: _revision
@property (readonly, nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithLibrary:(id)arg0 revision:(id)arg1 type:(int)arg2 item:(id)arg3 ;
-(void)dealloc;


@end


#endif