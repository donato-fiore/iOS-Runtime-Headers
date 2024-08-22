// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPBONEOFDESCRIPTOR_H
#define TRIPBONEOFDESCRIPTOR_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TRIPBOneofDescriptor : NSObject {
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