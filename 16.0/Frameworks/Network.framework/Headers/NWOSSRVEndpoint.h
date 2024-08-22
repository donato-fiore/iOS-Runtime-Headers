// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWOSSRVENDPOINT_H
#define NWOSSRVENDPOINT_H

@class endpoint;



@interface NWOSSRVEndpoint : endpoint {
    char * name;
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