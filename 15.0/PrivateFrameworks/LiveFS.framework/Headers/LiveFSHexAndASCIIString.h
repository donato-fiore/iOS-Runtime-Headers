// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIVEFSHEXANDASCIISTRING_H
#define LIVEFSHEXANDASCIISTRING_H

@class NSString, NSData;



@interface LiveFSHexAndASCIIString : NSString {
    NSData *data;
}




-(NSUInteger)length;
-(id)data;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif