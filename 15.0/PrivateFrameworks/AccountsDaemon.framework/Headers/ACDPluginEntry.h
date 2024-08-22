// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDPLUGINENTRY_H
#define ACDPLUGINENTRY_H

@class NSSet, NSString, NSBundle;
@protocol ACDPluginEntryProtocol;

#import <Foundation/Foundation.h>


@interface ACDPluginEntry : NSObject <ACDPluginEntryProtocol>

 {
    id *_principalObject;
    NSSet *_supportedAccountTypes;
    NSSet *_supportedDataclasses;
    NSString *_identifier;
    ? _fetchedFlags;
}


@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id *principalObject;
@property (readonly, nonatomic) NSSet *supportedAccountTypes;
@property (readonly, nonatomic) NSSet *supportedDataclasses;


-(BOOL)principalObjectRespondsToSelector:(SEL)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithBundle:(id)arg0 ;


@end


#endif