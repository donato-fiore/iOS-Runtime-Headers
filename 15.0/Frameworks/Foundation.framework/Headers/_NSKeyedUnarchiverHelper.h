// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSKEYEDUNARCHIVERHELPER_H
#define _NSKEYEDUNARCHIVERHELPER_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "NSError.h"

@interface _NSKeyedUnarchiverHelper : NSObject {
    NSArray *_white;
    unsigned int _lastRef;
    NSMutableArray *_allowedClasses;
    BOOL expectsUnnestedCollection;
    BOOL decodedCollection;
}


@property (copy) NSError *decodeError; // ivar: _decodeError


-(BOOL)classNameAllowed:(Class)arg0 ;
-(id)allowedClassNames;
-(id)init;
-(void)dealloc;
-(void)setAllowedClassNames:(id)arg0 ;


@end


#endif