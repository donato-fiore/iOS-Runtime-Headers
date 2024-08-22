// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSEARCHPROXY_H
#define MSSEARCHPROXY_H

@class NSString;
@protocol MSDSearchResultsProtocol;

#import <Foundation/Foundation.h>

#import "MSSearch.h"

@interface MSSearchProxy : NSObject <MSDSearchResultsProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MSSearch *search; // ivar: _search
@property (readonly) Class superclass;


-(id)initWithSearch:(id)arg0 ;
-(void)foundResults:(id)arg0 error:(id)arg1 ;


@end


#endif