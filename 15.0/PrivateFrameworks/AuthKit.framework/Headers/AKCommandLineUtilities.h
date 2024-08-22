// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKCOMMANDLINEUTILITIES_H
#define AKCOMMANDLINEUTILITIES_H

@class NSDateFormatter;

#import <Foundation/Foundation.h>


@interface AKCommandLineUtilities : NSObject {
    NSDateFormatter *_dateFormatter;
}


@property (readonly, nonatomic) NSDateFormatter *dateFormatter;


-(id)errorFromServerResponseBody:(id)arg0 ;
-(id)jsonDictionaryForData:(id)arg0 error:(id)arg1 ;
-(id)mutableJSONRequestForPath:(id)arg0 ;
-(id)mutableJSONRequestForURL:(id)arg0 ;
-(void)createAndExecuteRequestForPath:(id)arg0 requestBody:(id)arg1 httpMethod:(id)arg2 configuration:(id)arg3 completion:(id)arg4 ;


@end


#endif