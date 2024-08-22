// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KSFORWARDINGWRITER_H
#define KSFORWARDINGWRITER_H

@class NSString;
@protocol KSWriter;

#import <Foundation/Foundation.h>


@interface KSForwardingWriter : NSObject <KSWriter>

 {
    id<KSWriter> *_writer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithOutputWriter:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)writeString:(id)arg0 ;


@end


#endif