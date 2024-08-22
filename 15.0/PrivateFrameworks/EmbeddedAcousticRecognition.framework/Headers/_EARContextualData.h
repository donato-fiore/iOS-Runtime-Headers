// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EARCONTEXTUALDATA_H
#define _EARCONTEXTUALDATA_H


#import <Foundation/Foundation.h>


@interface _EARContextualData : NSObject {
    shared_ptr<quasar::ContextualData> _contextualData;
}




+(void)initialize;
-(BOOL)addNamedEntity:(id)arg0 metadata:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)namedEntities;
-(void)iterNamedEntitySourceWithApplication:(id)arg0 block:(id)arg1 ;


@end


#endif