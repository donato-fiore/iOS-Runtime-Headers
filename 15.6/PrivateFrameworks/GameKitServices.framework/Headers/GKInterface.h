// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKINTERFACE_H
#define GKINTERFACE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface GKInterface : NSObject

@property (copy, nonatomic) NSString *bsdName; // ivar: _bsdName
@property (retain, nonatomic) NSNumber *index; // ivar: _index
@property (nonatomic) unsigned int priority; // ivar: _priority
@property (copy, nonatomic) NSString *type; // ivar: _type


+(id)bsdNameForIndex:(id)arg0 ;
+(id)interfaceWithInterfaceIndex:(id)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif