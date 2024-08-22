// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAFKEYCHAINITEM_H
#define AAFKEYCHAINITEM_H

@class NSData;

#import <Foundation/Foundation.h>

#import "AAFKeychainItemDescriptor.h"

@interface AAFKeychainItem : NSObject

@property (retain, nonatomic) AAFKeychainItemDescriptor *descriptor; // ivar: _descriptor
@property (copy, nonatomic) NSData *value; // ivar: _value


-(id)initWithAttributes:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 value:(id)arg1 ;
-(id)itemAttributes;


@end


#endif