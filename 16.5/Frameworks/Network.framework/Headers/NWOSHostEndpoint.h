// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWOSHOSTENDPOINT_H
#define NWOSHOSTENDPOINT_H

@class endpoint;
@protocol OS_dispatch_data;



@interface NWOSHostEndpoint : endpoint {
    char * hostname;
    unsigned short port;
    unsigned short priority;
    unsigned short weight;
    NSObject<OS_dispatch_data> *ech_config;
}




-(BOOL)isEqualToEndpoint:(id)arg0 matchFlags:(unsigned char)arg1 ;
-(NSUInteger)getHash;
-(char *)createDescription:(BOOL)arg0 ;
-(char *)domainForPolicy;
-(char *)hostname;
-(id)copyDictionary;
-(id)copyEndpoint;
-(id)echConfig;
-(unsigned int)type;
-(unsigned short)port;
-(unsigned short)priority;
-(unsigned short)weight;
-(void)dealloc;
-(void)setEchConfig:(id)arg0 ;
-(void)setPriority:(unsigned short)arg0 ;
-(void)setWeight:(unsigned short)arg0 ;


@end


#endif