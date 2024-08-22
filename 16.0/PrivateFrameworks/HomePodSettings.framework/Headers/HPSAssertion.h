// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSASSERTION_H
#define HPSASSERTION_H


#import <Foundation/Foundation.h>


@interface HPSAssertion : NSObject {
    ? logger;
    ? assertionContext;
    ? connectionProvider;
    ? connection;
}




-(id)init;
-(id)initWithIdentifier:(id)arg0 assertionType:(NSUInteger)arg1 connectionProvider:(id)arg2 ;
-(void)invalidate;


@end


#endif