// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDIRECTORYPACKAGEDATAWRITER_H
#define TSPDIRECTORYPACKAGEDATAWRITER_H

@class NSURL, NSString;
@protocol TSPPackageDataWriter;

#import <Foundation/Foundation.h>


@interface TSPDirectoryPackageDataWriter : NSObject <TSPPackageDataWriter>

 {
    NSURL *_URL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)flushPendingWritesReturningError:(*id)arg0 ;
-(BOOL)writeData:(id)arg0 toRelativePath:(id)arg1 allowEncryption:(BOOL)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)targetDataURLForPath:(id)arg0 ;
-(struct CGDataConsumer *)newCGDataConsumerAtRelativePath:(id)arg0 ;


@end


#endif