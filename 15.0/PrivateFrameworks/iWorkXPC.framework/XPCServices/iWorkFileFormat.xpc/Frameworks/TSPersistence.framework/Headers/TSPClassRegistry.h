// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPCLASSREGISTRY_H
#define TSPCLASSREGISTRY_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSPClassRegistry : NSObject {
    NSString *_name;
    NSMutableDictionary *_registry;
    BOOL _didFinishRegistration;
}




-(Class)classForExtensionNumber:(int)arg0 ;
-(Class)classForMessage:(struct Message *)arg0 ;
-(Class)p_classForExtensionNumber:(int)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(void)registerClass:(Class)arg0 forExtensionNumber:(int)arg1 ;


@end


#endif