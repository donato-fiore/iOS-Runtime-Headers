// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SEYMOURCLIENT15ACCOUNTPROVIDER_H
#define _TTC13SEYMOURCLIENT15ACCOUNTPROVIDER_H

@class SwiftObject;



@interface _TtC13SeymourClient15AccountProvider : SwiftObject {
    ? accountStore;
    ? eventHub;
    ? cachedPrimaryAccount;
    ? lock;
}




-(void)onAccountChanged;


@end


#endif