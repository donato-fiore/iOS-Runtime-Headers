// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAPPDOCUMENTREFRESHEVENTDESCRIPTOR_H
#define VUIAPPDOCUMENTREFRESHEVENTDESCRIPTOR_H

@class NSString;


#import "VUIAppDocumentUpdateEventDescriptor.h"

@interface VUIAppDocumentRefreshEventDescriptor : VUIAppDocumentUpdateEventDescriptor

@property (nonatomic) NSUInteger delayInSeconds; // ivar: _delayInSeconds
@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithEventType:(NSUInteger)arg0 ;
-(id)initWithEventType:(NSUInteger)arg0 delayInSeconds:(NSUInteger)arg1 name:(id)arg2 ;


@end


#endif