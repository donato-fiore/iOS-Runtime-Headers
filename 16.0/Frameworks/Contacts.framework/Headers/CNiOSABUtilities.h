// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNIOSABUTILITIES_H
#define CNIOSABUTILITIES_H


#import <Foundation/Foundation.h>


@interface CNiOSABUtilities : NSObject {
    *void _addressBook;
}




-(id)allAccountIdentifiers;
-(id)filterPeople:(id)arg0 matchingAccountIdentifiers:(id)arg1 ;
-(id)initWithAddressBook:(*void)arg0 ;
-(void)dealloc;


@end


#endif