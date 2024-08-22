// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPBHOST_DELEGATE_H
#define RPBHOST_DELEGATE_H

@protocol RPBHostDelegate;

#import <Foundation/Foundation.h>


@interface RPBHost_Delegate : NSObject <RPBHostDelegate>

 {
    function<vp::Expected<std::vector<vp::rpb::Parameter_Info, vp::Allocator<vp::rpb::Parameter_Info>>, vp::rpb::Error> (vp::rpb::Scope)> get_parameter_info_callback;
    function<vp::Expected<float, vp::rpb::Error> (unsigned int, vp::rpb::Scope, unsigned int)> get_parameter_callback;
    function<vp::Expected<void, vp::rpb::Error> (unsigned int, vp::rpb::Scope, unsigned int, float)> set_parameter_callback;
    function<vp::Expected<std::vector<vp::rpb::Property_Info, vp::Allocator<vp::rpb::Property_Info>>, vp::rpb::Error> (vp::rpb::Scope)> get_property_info_callback;
    function<vp::Expected<applesauce::CF::TypeRef, vp::rpb::Error> (unsigned int, vp::rpb::Scope, unsigned int)> get_property_callback;
    function<vp::Expected<void, vp::rpb::Error> (unsigned int, vp::rpb::Scope, unsigned int, applesauce::CF::TypeRef)> set_property_callback;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(void)getRemoteProcessingBlockParameter:(*float)arg0 forID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3 object:(id)arg4 withError:(*id)arg5 ;
-(void)getRemoteProcessingBlockParameterInfo:(id)arg0 forScope:(unsigned int)arg1 object:(id)arg2 withError:(*id)arg3 ;
-(void)getRemoteProcessingBlockProperty:(*id)arg0 forID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3 object:(id)arg4 withError:(*id)arg5 ;
-(void)getRemoteProcessingBlockPropertyInfo:(id)arg0 forScope:(unsigned int)arg1 object:(id)arg2 withError:(*id)arg3 ;
-(void)setRemoteProcessingBlockParameter:(float)arg0 forID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3 object:(id)arg4 withError:(*id)arg5 ;
-(void)setRemoteProcessingBlockProperty:(id)arg0 forID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3 object:(id)arg4 withError:(*id)arg5 ;


@end


#endif