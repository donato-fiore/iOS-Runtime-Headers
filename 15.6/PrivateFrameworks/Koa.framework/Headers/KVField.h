// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KVFIELD_H
#define KVFIELD_H

@class NSData, NSString;
@protocol KVJSONEncodable;

#import <Foundation/Foundation.h>


@interface KVField : NSObject <KVJSONEncodable>

 {
    NSData *_buffer;
    *Field _field;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)fieldWithBuffer:(id)arg0 root:(*void)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToField:(id)arg0 ;
-(NSInteger)fieldType;
-(id)JSONWithIndent:(unsigned char)arg0 ;
-(id)init;
-(id)initWithBuffer:(id)arg0 root:(struct Field *)arg1 ;
-(id)label;
-(id)value;


@end


#endif