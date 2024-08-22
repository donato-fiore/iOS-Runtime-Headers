// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWOSAPPLICATIONSERVICEENDPOINT_H
#define NWOSAPPLICATIONSERVICEENDPOINT_H

@class endpoint;



@interface NWOSApplicationServiceEndpoint : endpoint {
    char * apple_id;
    char * application_service;
    unsigned char service_identifier;
}




-(BOOL)isEqualToEndpoint:(id)arg0 matchFlags:(unsigned char)arg1 ;
-(char *)createDescription:(BOOL)arg0 ;
-(id)copyDictionary;
-(id)copyEndpoint;
-(unsigned int)type;
-(void)dealloc;


@end


#endif