// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWOSADDRESSENDPOINT_H
#define NWOSADDRESSENDPOINT_H

@class endpoint;
@protocol OS_dispatch_data;



@interface NWOSAddressEndpoint : endpoint {
    sockaddr_storage address;
    ether_addr ethernet_address;
    NSObject<OS_dispatch_data> *ech_config;
    char * hostname;
    int original_fd;
    unsigned short priority;
    BOOL calculated_hostname;
}




-(BOOL)isEqualToEndpoint:(id)arg0 matchFlags:(unsigned char)arg1 ;
-(NSUInteger)getHash;
-(char *)createDescription:(BOOL)arg0 ;
-(char *)hostname;
-(id)copyDictionary;
-(id)copyEndpoint;
-(id)echConfig;
-(unsigned int)type;
-(unsigned short)port;
-(unsigned short)priority;
-(void)dealloc;
-(void)setEchConfig:(id)arg0 ;
-(void)setPriority:(unsigned short)arg0 ;


@end


#endif