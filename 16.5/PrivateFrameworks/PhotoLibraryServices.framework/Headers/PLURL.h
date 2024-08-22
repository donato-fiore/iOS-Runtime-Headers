// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLURL_H
#define PLURL_H

@class NSURL;



@interface PLURL : NSURL {
    uint8_t _ssbCounter;
}




-(BOOL)startAccessingSecurityScopedResource;
-(id)replacementObjectForCoder:(id)arg0 ;
-(void)dealloc;
-(void)stopAccessingSecurityScopedResource;


@end


#endif