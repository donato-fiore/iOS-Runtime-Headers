// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFARCHIVEWRITER_H
#define WFARCHIVEWRITER_H


#import <Foundation/Foundation.h>


@interface WFArchiveWriter : NSObject

@property (readonly, nonatomic) *archive archive; // ivar: _archive


-(BOOL)finishWithError:(*id)arg0 ;
-(BOOL)writeArchiveEntry:(id)arg0 error:(*id)arg1 ;
-(id)initWithDestinationURL:(id)arg0 format:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif