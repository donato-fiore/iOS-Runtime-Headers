// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDSASSERTIONDATAHANDLER_H
#define DDSASSERTIONDATAHANDLER_H

@protocol DDSAssertionDataHandling;

#import <Foundation/Foundation.h>


@interface DDSAssertionDataHandler : NSObject <DDSAssertionDataHandling>





-(id)assertionContentDirectory;
-(id)assertionContentURL;
-(id)loadAssertionData;
-(void)saveAssertionData:(id)arg0 ;


@end


#endif