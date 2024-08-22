// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMLAZYDESCRIPTION_H
#define MCMLAZYDESCRIPTION_H

@class NSString;



@interface MCMLazyDescription : NSString {
    id *_block;
    NSString *_value;
}




-(NSUInteger)length;
-(id)description;
-(id)initWithDescriber:(id)arg0 ;
-(id)redactedDescription;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif