// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GPBONEOFDESCRIPTOR_H
#define GPBONEOFDESCRIPTOR_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface GPBOneofDescriptor : NSObject {
    char * name_;
    SEL caseSel_;
}


@property (readonly, nonatomic) NSArray *fields; // ivar: fields_
@property (readonly, nonatomic) NSString *name;


-(id)fieldWithName:(id)arg0 ;
-(id)fieldWithNumber:(unsigned int)arg0 ;
-(id)initWithName:(char *)arg0 fields:(id)arg1 ;
-(void)dealloc;


@end


#endif