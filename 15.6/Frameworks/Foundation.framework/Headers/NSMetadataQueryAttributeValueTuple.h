// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSMETADATAQUERYATTRIBUTEVALUETUPLE_H
#define NSMETADATAQUERYATTRIBUTEVALUETUPLE_H


#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSMetadataQueryAttributeValueTuple : NSObject {
    id *_attr;
    id *_value;
    NSUInteger _count;
    *void _reserved;
}


@property (readonly, copy) NSString *attribute;
@property (readonly) NSUInteger count;
@property (readonly, retain) id *value;


-(id)_init:(id)arg0 attribute:(id)arg1 value:(id)arg2 count:(NSUInteger)arg3 ;
-(void)dealloc;


@end


#endif