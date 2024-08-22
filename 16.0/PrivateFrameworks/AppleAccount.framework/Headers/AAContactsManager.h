// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AACONTACTSMANAGER_H
#define AACONTACTSMANAGER_H

@class NSString;
@protocol AACNContactsManager;

#import <Foundation/Foundation.h>


@interface AAContactsManager : NSObject <AACNContactsManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_predicateForHandle:(id)arg0 ;
-(id)contactForHandle:(id)arg0 ;
-(id)contactIDForHandle:(id)arg0 ;


@end


#endif