// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIDECARITEM_H
#define SIDECARITEM_H

@class NSData, NSString, UTType;

#import <Foundation/Foundation.h>


@interface SidecarItem : NSObject

@property (readonly) NSData *data; // ivar: _data
@property (readonly, copy) id *objectValue;
@property (readonly) NSString *type; // ivar: _type
@property (readonly) UTType *uniformType;


-(BOOL)conformsToType:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithData:(id)arg0 type:(id)arg1 ;
-(id)initWithObject:(id)arg0 type:(id)arg1 ;


@end


#endif