// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPROPERTYSTOREMAPPING_H
#define NSPROPERTYSTOREMAPPING_H



#import "NSStoreMapping.h"
#import "NSPropertyDescription.h"

@interface NSPropertyStoreMapping : NSStoreMapping {
    NSPropertyDescription *_property;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithProperty:(id)arg0 ;
-(id)property;
-(void)dealloc;


@end


#endif