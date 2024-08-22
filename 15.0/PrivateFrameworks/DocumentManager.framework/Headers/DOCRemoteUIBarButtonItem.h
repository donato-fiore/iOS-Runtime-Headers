// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCREMOTEUIBARBUTTONITEM_H
#define DOCREMOTEUIBARBUTTONITEM_H

@class UIBarButtonItem, NSUUID;
@protocol NSCopying;



@interface DOCRemoteUIBarButtonItem : UIBarButtonItem <NSCopying>



@property (retain) NSUUID *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif