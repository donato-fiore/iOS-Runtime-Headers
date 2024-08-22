// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALGEOCODER_H
#define CALGEOCODER_H

@class NSString, MKLocalSearch;

#import <Foundation/Foundation.h>


@interface CalGeocoder : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSString *locationString; // ivar: _locationString
@property (retain, nonatomic) MKLocalSearch *search; // ivar: _search


+(void)geocodeLocationString:(id)arg0 withCompletionBlock:(id)arg1 ;
-(id)initWithLocationString:(id)arg0 andCompletionBlock:(id)arg1 ;
-(void)_callCompletionBlockWithResult:(id)arg0 error:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)startGeocoding;


@end


#endif