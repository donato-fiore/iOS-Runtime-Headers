// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13SEYMOURCLIENT15ACCOUNTPROVIDER_H
#define _TTC13SEYMOURCLIENT15ACCOUNTPROVIDER_H

@class SwiftObject;



@interface _TtC13SeymourClient15AccountProvider : SwiftObject {
    ? $defaultActor;
    ? accountStore;
    ? eventHub;
    ? cachedPrimaryAccount;
}




-(void)onAccountChanged;


@end


#endif