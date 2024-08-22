// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWOSCUSTOMENDPOINT_H
#define NWOSCUSTOMENDPOINT_H

@class endpoint;
@protocol OS_dispatch_data;



@interface NWOSCustomEndpoint : endpoint {
    NSObject<OS_dispatch_data> *data;
    id *resolver_block;
    unsigned int type;
}




-(BOOL)isEqualToEndpoint:(id)arg0 matchFlags:(unsigned char)arg1 ;
-(NSUInteger)getHash;
-(char *)createDescription:(BOOL)arg0 ;
-(id)copyDictionary;
-(id)copyEndpoint;
-(unsigned int)type;


@end


#endif