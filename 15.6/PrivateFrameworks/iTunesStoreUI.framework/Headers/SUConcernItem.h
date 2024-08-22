// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCONCERNITEM_H
#define SUCONCERNITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SUConcernItem : NSObject

@property (nonatomic, getter=isDefaultConcern) BOOL defaultConcern; // ivar: _default
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif