// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWOSURLENDPOINT_H
#define NWOSURLENDPOINT_H

@class endpoint;



@interface NWOSURLEndpoint : endpoint {
    *__CFURL url_ref;
    unsigned short port;
    char * url;
    char * scheme;
    char * hostname;
    char * path;
    char * sanitized_url;
    char url_hash;
    BOOL inferred_port;
    BOOL __pad_bits;
}




-(BOOL)isEqualToEndpoint:(id)arg0 matchFlags:(unsigned char)arg1 ;
-(NSUInteger)getHash;
-(char *)createDescription:(BOOL)arg0 ;
-(char *)domainForPolicy;
-(char *)hostname;
-(id)copyDictionary;
-(id)copyEndpoint;
-(unsigned int)type;
-(unsigned short)port;
-(void)dealloc;


@end


#endif