// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFFILE_H
#define MFFILE_H

@class NSString, NSURL;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface MFFile : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPurgeable; // ivar: _isPurgeable
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(id)log;
-(BOOL)markPurgeableWithError:(*id)arg0 ;
-(id)initWithFile:(id)arg0 account:(id)arg1 ;
-(id)initWithFile:(id)arg0 isPurgeable:(BOOL)arg1 ;


@end


#endif