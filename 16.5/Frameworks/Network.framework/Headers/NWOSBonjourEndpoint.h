// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWOSBONJOURENDPOINT_H
#define NWOSBONJOURENDPOINT_H

@class endpoint;



@interface NWOSBonjourEndpoint : endpoint {
    char * service_name;
    char * service_type;
    char * service_domain;
    char * service_composite;
}




-(BOOL)isEqualToEndpoint:(id)arg0 matchFlags:(unsigned char)arg1 ;
-(NSUInteger)getHash;
-(char *)createDescription:(BOOL)arg0 ;
-(char *)domainForPolicy;
-(id)copyDictionary;
-(id)copyEndpoint;
-(unsigned int)type;
-(void)dealloc;


@end


#endif