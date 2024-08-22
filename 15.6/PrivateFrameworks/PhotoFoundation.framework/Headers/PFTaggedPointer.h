// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFTAGGEDPOINTER_H
#define PFTAGGEDPOINTER_H


#import <Foundation/Foundation.h>


@interface PFTaggedPointer : NSObject {
    ? _payload;
}




+(BOOL)taggedPointersEnabled;
+(id)newInstanceWithPayload:(NSUInteger)arg0 ;
+(id)newInstanceWithSignedPayload:(NSInteger)arg0 ;
+(unsigned short)tag;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTaggedPointer;
-(NSInteger)signedPayload;
-(NSUInteger)hash;
-(NSUInteger)payload;
-(id)initWithPayload:(NSUInteger)arg0 ;
-(id)initWithSignedPayload:(NSInteger)arg0 ;


@end


#endif