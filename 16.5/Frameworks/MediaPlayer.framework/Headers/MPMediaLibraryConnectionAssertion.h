// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMEDIALIBRARYCONNECTIONASSERTION_H
#define MPMEDIALIBRARYCONNECTIONASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MPMediaLibrary.h"

@interface MPMediaLibraryConnectionAssertion : NSObject {
    MPMediaLibrary *_library;
}


@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(id)_initWithMediaLibrary:(id)arg0 identifier:(id)arg1 ;
-(id)description;
-(void)dealloc;


@end


#endif